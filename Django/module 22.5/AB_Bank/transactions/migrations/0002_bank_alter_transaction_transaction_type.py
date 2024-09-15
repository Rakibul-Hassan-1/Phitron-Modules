# Generated by Django 5.0.1 on 2024-01-15 10:00

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('transactions', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Bank',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('is_Bankrupt', models.BooleanField(default=False)),
            ],
        ),
        migrations.AlterField(
            model_name='transaction',
            name='transaction_type',
            field=models.IntegerField(choices=[(1, 'Deposite'), (2, 'Withdrawal'), (3, 'Loan'), (4, 'Loan Paid'), (5, 'Transfer')], null=True),
        ),
    ]
